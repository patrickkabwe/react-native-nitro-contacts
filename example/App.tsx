import React from 'react';
import {PermissionsAndroid, StyleSheet, Text, View} from 'react-native';
import {NitroContacts} from 'react-native-nitro-contacts';
import {NitroContact} from '../src/types';

function App(): React.JSX.Element {
  const [contacts, setContacts] = React.useState<NitroContact[]>([]);

  React.useEffect(() => {
    PermissionsAndroid.requestMultiple([
      PermissionsAndroid.PERMISSIONS.READ_CONTACTS,
      PermissionsAndroid.PERMISSIONS.WRITE_CONTACTS,
    ]).then(console.log);
    NitroContacts.getContacts()
      .then(contacts => {
        console.log('contacts: ', contacts);

        setContacts(contacts);
      })
      .catch(console.error);
    NitroContacts.getContact('1').then(
      console.log,
    );
    NitroContacts.authorizationStatus().then(console.log);
  }, []);

  return (
    <View style={styles.container}>
      <Text style={styles.text}>{JSON.stringify(contacts, null, 4)}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
  },
  text: {
    fontSize: 16,
    color: 'green',
  },
});

export default App;
