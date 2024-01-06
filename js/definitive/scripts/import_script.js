// Asynchronously load and execute a script from a specified URL
// Returns a Promise that resolves when the script has loaded.
function importScript (url) {
  return new Promise((resolve, reject) => {
    // Create <script> element.
    const s = document.createElement('script');

    // Resolve promise when loaded
    s.onload = () => { resolve(); };
    // Reject on failure
    s.onerror = (e) => { reject(e); };
    // Set th URL script
    s.src = url;
    // Add script to document
    document.head.append(s);
  });
}

// importScript('script_uri')
