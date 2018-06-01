require 'uri'

class HistoryController < ApplicationController
	def index
		@link = 'userResult'
		@ls_dir = `find "#{@link}" -maxdepth 1 -type d | sort`

		@ls_dir = @ls_dir.split("\n")

		@ls_dir = @ls_dir.map{|i| i = i[@link.length+1..-1]}
		@ls_dir = @ls_dir[1..-1] if( @ls_dir.length > 1 )

		@file_name = URI.unescape( ( params[:file_name] ) ? params[:file_name] : "" )
		# @file_name = @file_name[1..-1]
		if ( @file_name.length > 0 )
			kt_dir = @ls_dir.count(@file_name) > 0
			if kt_dir
				@kt = true
				if @kt
					@dir_view = `ls "#{@link}/#{@file_name}" --group-directories-first | sort`
					@dir_view = @dir_view.split("\n")
				end
			else
				@kt = false
			end
		else
			@kt = false
		end

		# binding.pry
	end
end
