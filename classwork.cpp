#include <iostream>
#include <string>

int main()
{
  //Exercise 1
  int x = 25;
  int y = 3;
  int add_xy;
  int sub_xy;
  int mult_xy;
  int div_xy;
  int mod_div;
  int z = 10;
  add_xy = x + y;
  sub_xy = x - y;
  mult_xy = x * y;
  div_xy = x / y;
  mod_div = x % y;
  bool xgreaterz;
  if (x>z) {
    xgreaterz = true;
  }
  else {
    xgreaterz = false;
  }
  bool ylesserz;
  if (y<z) {
    ylesserz = true;
  }
  else {
    ylesserz = false;
  }

   std::cout << "Exercise 1!" << std::endl;
   std::cout << "x + y = " << add_xy << std::endl;
   std::cout << "x - y = " << sub_xy << std::endl;
   std::cout << "x * y = " << mult_xy << std::endl;
   std::cout << "x / y = " << div_xy << std::endl;
   std::cout << "x % y = " << mod_div << std::endl;
  std::cout << "Is x greater than z? " << xgreaterz << std::endl;
    std::cout << "Is y lesser than z? " << ylesserz << std::endl;

  //Exercise 2 //fix the line not working and fix why hasUmbrella gets marked as true sometimes
     std::cout << "Exercise 2!" << std::endl;

  bool isSunny;
  bool hasUmbrella;
  isSunny = true;
  hasUmbrella = false;

  std::cout << "Is it both sunny and do you have an umbrella? " << (isSunny && hasUmbrella) << std::endl;
  std::cout << "Is it sunny or do you have an umbrella? " << (isSunny || hasUmbrella) << std::endl;
  std::cout << "Is it not sunny? " << !isSunny << std::endl;
  std::cout << "Is it not sunny AND you don't have an umbrella? " << (!isSunny && !hasUmbrella) << std::endl;


//Exercise 3
     std::cout << "Exercise 3!" << std::endl;
  
  int n;
  n = 7;
  double m;
  m = 4.0;
  bool hasLicense;
  hasLicense = false;
  bool ngreaterm;
  bool mequal4;
  bool hasLicenseandmlessequaln;
  bool n5andLicense;

  if (n>m) {
    ngreaterm = true;
  }
  else {
    ngreaterm = false;
  }
  if (m==4.0) {
    mequal4 = true;
  }
  else {
    mequal4 = false;
  }
  if (hasLicense==true && m<=n) {
    hasLicenseandmlessequaln = true;
  }
  else {
    hasLicenseandmlessequaln = false;
  }
  if (n>5 && hasLicense==false) {
    n5andLicense = true;
  }
  else {
    n5andLicense = false;
  }

  std::cout << ngreaterm << mequal4 << hasLicenseandmlessequaln << n5andLicense << std::endl;

  //Exercise 4
  std::cout << "Exercise 4!" << std::endl;
  std::string firstname;
  firstname = "John";
  std::string lastname; 
  lastname = "Doe";
  double score;
  score = 85.75;

  std::cout << lastname << ", " << firstname << std::endl;
  std:: cout << "Your score is: " << score << std::endl;

  //Exercise 5
  std::cout << "Exercise 5!" << std::endl;
  int age;
  age = 18;
  double height;
  height = 5.9;
  bool isStudent;
  isStudent = true;
  std::string city;
  city = "New York";

  int yearBorn;
  yearBorn = 2024-age;
  bool adultcheck;
  if (age>=18) {
    adultcheck = true;
  }
  else {
    adultcheck = false;
  }
  bool oversix;
  if (height>6) {
    oversix = true;
  }
  else {
    oversix = false;
  }
  bool citycheck;
  if (city=="New York") {
    citycheck = true;
  }
  else {
    citycheck = false;
  }
  std::cout << adultcheck << std::endl;
  std::cout << oversix << std::endl;
  std::cout << (isStudent && citycheck) << std::endl;
  return 0;
}
