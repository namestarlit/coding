import { initializeApp } from "firebase/app";
import { getFirestore, collection } from 'firebase/firestore';

const firebaseConfig = {
  apiKey: "AIzaSyD6xf8zSC7DHNaFETrvzmg1_zi1NgxJY7s",
  authDomain: "markdown-editor-6fec4.firebaseapp.com",
  projectId: "markdown-editor-6fec4",
  storageBucket: "markdown-editor-6fec4.appspot.com",
  messagingSenderId: "168468628091",
  appId: "1:168468628091:web:cf77755450e1f2b68d98de"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
export const db = getFirestore(app);
export const notesCollection = collection(db, 'notes');
