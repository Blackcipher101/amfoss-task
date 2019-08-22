
require "HTTParty"
require "Nokogiri"
require "byebug"

def scrapper
  doc=HTTParty.get("https://www.bing.com/search?q=regex&filters=ufn%3a%22Regular+expression%22+sid%3a%22f61e6ea2-c48c-2575-af6a-b4978693103e%22&form=WNSGPH&qs=MB&cvid=437673f20c534069a60a8298c022fd1e&pq=regex&cc=IN&setlang=en-US&PC=HCTS&nclid=711D31B61C6A8B924630D5B9F7C53980&ts=1564831911286&elv=AY3%21uAY7tbNNZGZ2yiGNjfORrpwtXPcON9AalCAW0Ul8nJ9*6%21rXmomKP2Lg8J6xqcGN0K0*nVwi397anB8s9SQWk*Wq2Lg*b50NWEb*nWfr&adlt=strict&wsso=Strict")
  parsepage ||=Nokogiri::HTML(doc)
  result=parsepage.css('div.g')
  byebug

end
scrapper

