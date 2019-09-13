  
package main

import (
    "github.com/dghubble/go-twitter/twitter"
    "github.com/dghubble/oauth1"
    "os"
    "flag"
    "fmt"
	
)

func main() {
	var User string    
	fmt.Println("Enter the name of the user?")
	fmt.Scanln(&User)
	tn:=flag.String("twitter",User,"it contains the name of twitter") 
	flag.Parse()
	config := oauth1.NewConfig("n7jHG93q92JTF37gfb9r5mVxC", "CwrGulJIVxrKuOlEdLPzQeXktzGhMzYCdmg9eecEsXWQ0LO9Ia")
	token := oauth1.NewToken("1162736073312620545-6YZ4a04wuBZhC5wFTWnAfEmhGQKZyF", "P7vXQa0KYbPaQpy9lITB55UkRkpOeXCsavwluOUhB3t5r")
	httpClient := config.Client(oauth1.NoContext, token)
	client := twitter.NewClient(httpClient)
	f, err := os.Create("Followers.txt")
	followers, resp, err := client.Followers.List(&twitter.FollowerListParams{ScreenName: *tn,})
	var i int = 0;
	fmt.Println(resp, err)
	f.WriteString("Followers - " + *tn)
	for _, follower := range followers.Users {
		i++
		f.WriteString("\n" + follower.ScreenName)
	}
	f.WriteString("\n")
	f.WriteString(fmt.Sprintf("\n", i))
	f.Close()

}
