Rails.application.routes.draw do
  # For details on the DSL available within this file, see http://guides.rubyonrails.org/routing.html
  get '/sourcecode', to: 'sourcecode#index'
  get '/detect', to: 'detect#index'
  post '/detect', to: 'detect#start'
  get '/result', to: 'result#index'
  get '/result/empty', to: 'result#show'
  get 'history', to: 'history#index'
end
