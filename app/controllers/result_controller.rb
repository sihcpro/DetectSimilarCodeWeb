require 'uri'

class ResultController < ApplicationController
	def read_file(file_name)
		file = File.open(file_name, "r")
		data = file.read
		file.close
		return data
	end

	def index
		@folder = URI.unescape( ( params[:folder] ) ? params[:folder] : "default" )
		@link = "userResult/#{@folder}"
		@ls = `ls "#{@link}"`
		@ls = @ls.split("\n")
		file_name = params[:id]
		if @ls.length == 0
			redirect_to action: 'show'
			return
		end

		# binding.pry
		if file_name
			if( @ls.count( file_name ) == 0 )
				redirect_to action: 'index', folder: @folder, id: @ls[0]
				return
			end
			@file_name = file_name
		else
			redirect_to action: 'index', folder: @folder, id: @ls[0]
			return
		end
		# @readfile = read_file("#{@link}/#{@file_name}")
		@readfile = `cat "#{@link}/#{@file_name}"`
		@dataline = @readfile.split("#########################################################################################")
		@dataline[0] = @dataline[0].split("\n")
		@dataline[1] = @dataline[1].split("\n")

		@criminal_name = @dataline[0][2][13..-1]
		@dataline[0] = @dataline[0][3..-2]

		@victim_name = @dataline[1][1][13..-1]
		@dataline[1] = @dataline[1][2..-2]

		# binding.pry
	end

	def show

		# binding.pry
	end
end
