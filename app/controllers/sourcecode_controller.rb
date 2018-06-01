require 'uri'

class SourcecodeController < ApplicationController
	def index
		@link = 'userSource'
		@index = URI.unescape( ( params[:link] ) ? params[:link] : "" )
		if @index.length > 0
			@link+= "#{@index}"
		end
		@ls_dir = `find "#{@link}" -maxdepth 1 -type d | sort`
		@ls_fil = `find "#{@link}" -maxdepth 1 -type f | sort`

		@ls_dir = @ls_dir.split("\n")
		@ls_fil = @ls_fil.split("\n")

		@ls_dir = @ls_dir.map{|i| i = i[@link.length+1..-1]}
		@ls_fil = @ls_fil.map{|i| i = i[@link.length+1..-1]}
		@ls_dir[0] = "."
		# @ls_dir = @ls_dir[1..-1] if( @ls_dir.length > 1 )

		@file_name = URI.unescape( ( params[:file_name] ) ? params[:file_name] : "" )
		# @file_name = @file_name[1..-1]
		if ( @file_name.length > 0 )
			kt_dir = @ls_dir.count(@file_name) > 0
			kt_fil = @ls_fil.count(@file_name) > 0
			if kt_dir || kt_fil
				@kt = true
				@isDir = kt_dir
				if @isDir
					@dir_view = `ls "#{@link}/#{@file_name}" --group-directories-first | sort`
					@dir_view = @dir_view.split("\n")
				else
					@fil_view = `cat "#{@link}/#{@file_name}"`
					begin
						@fil_view = @fil_view.split("\n")
					rescue
						@fil_view = [@fil_view.to_s]
					end
				end
			else
				@kt = false
			end
		else
			@kt = false
		end

		@link_arr = @index.split("/")
		@back_link = @link_arr[0..-2].join("/") if @link_arr.length > 0

		if @kt && @isDir
			@count_cpp = `ls  "#{@link+"/"+@file_name}"/*.cpp | wc -l`
			@count_cpp = @count_cpp.to_i
		end

		# binding.pry
	end
end
