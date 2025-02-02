import React from 'react';
import { Text, View, StyleSheet } from 'react-native';
import { NitroContacts } from 'react-native-nitro-contacts';

function App(): React.JSX.Element {
  return (
    <View style={styles.container}>
      <Text style={styles.text}>
      {NitroContacts.sum(1, 2)}
      </Text>
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
    fontSize: 40, 
    color: 'green'
  }
});

export default App;