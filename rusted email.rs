extern crate regex;
use regex::Regex;
use std::io;

fn main() {
    let mut line = String::new();


    println!("Enter your email id :");
    let mut b1:String=io::stdin().read_line(&mut line).unwrap().to_string();
    let sa: Regex = Regex::new(\w\w\w\w\w\w\w+@\w\w\w\w+\.\w\w\w).unwrap();
    let w=sa.is_match( &mut line);
    print!(
        "{}",
        w
    );
}
