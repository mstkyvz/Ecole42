# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muyavuz <muyavuz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 19:57:16 by muyavuz           #+#    #+#              #
#    Updated: 2022/08/30 19:57:21 by muyavuz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep "ether" | sed 's/\(.*\)ether //g' | cut -b 1-17
