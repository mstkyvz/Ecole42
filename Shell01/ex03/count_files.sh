# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 19:56:50 by muyavuz           #+#    #+#              #
#    Updated: 2022/08/30 19:56:56 by muyavuz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . | wc -l | tr -d ' '
