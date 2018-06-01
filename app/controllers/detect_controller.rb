require 'uri'

class DetectController < ApplicationController
	def index
		@source = URI.unescape( ( params[:source] ) ? params[:source] : "" )

		# binding.pry
	end

	def start
		@source = URI.unescape( ( params[:source] ) ? params[:source] : "default" )
		@result = URI.unescape( ( params[:result] != "" ) ? params[:result] : "default" )

		`./detectSimilarCode.sh "#{@source}" "userResult/#{@result}"`
		redirect_to :controller => 'result', :action => 'index', folder: "#{@result}"

		# binding.pry
	end
end
