/* sintactically before the return type we write template then open an angular bracket <typename ( given name)>
and finally we use the given name as a data type in the passing parametre of the function

what does it mean?:

    Template: this is means that this is a template that will be evaluated at compile time, 
    so basically the function isn't real it's only get created when we call it, and when we call it based on jow we call it
    with what types  does this actually get created and compiled as source code.
    < ...... >: this called a template parametre  , the given name is an argument that takes the type passed within the function
    btw: c++ knows the type of the parametre passed in the function and it can automatically deduce what type (given name) should be
    which why we don't have to specify the type using angular brackets before the function parametre which makes our job
    a bit easier
what actually happend when we write a template in our code but we dont call it and use it in our main()?:

    this template doesn't really exist it's just a template that get created when we call the template function
    with the given template argument
    btw: the templates can represent (functions, classe, ..)

*/ 