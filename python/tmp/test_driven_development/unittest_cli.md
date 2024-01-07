## The unittest Command-Line Interface
The unittest module can be used from the command line to run tests
from modules, classes or even individual test methods  
```bash
python -m unittest test_module1 test_module2
python -m unittest test_module.TestClass
python -m unittest test_module.TestClass.test_method
```

Test modules can be specified by file path as well:  
```bash
python -m unittest tests/test_something.py
```

You can also run at the root of the project directory to discover tests
in the module having the tests directory at the root of the package directory.  
```bash
python -m unittest discrover tests
```  

Or you can run the unittest module without arguments to trigger test
discovery in the directory automatic.  
```bash
python -m unittest
python -m unittest discover
```

### For More Details check unittest module documentation
Ref: [unittest documentation](https://docs.python.org/3/library/unittest.html)
