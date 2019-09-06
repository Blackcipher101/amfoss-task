
require "HTTParty"
require "Nokogiri"
require "byebug"

def scrapper
  doc=HTTParty.get("https://www.google.com/search?q=linux")
  parsepage ||=Nokogiri::HTML(doc)
  byebug

end
@byebug
scrapper
