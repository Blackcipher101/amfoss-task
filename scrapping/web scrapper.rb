require 'rubygems'
require 'nokogiri'
require 'open-uri'

doc = Nokogiri::HTML(open('https://www.google.com/search?num=11&q=linux'))

doc.xpath('//a/div[@class="BNeawe vvjwJb AP7Wnd"]').each do |results|
    puts ""
    puts results.text
end    
