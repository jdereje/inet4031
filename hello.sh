              #!/bin/bash
              
              a=2
              b=2
              c=$((a + b))
	      list_of_users=("User1" "User2" "User3")

              echo "Bash says: Hello, World!"
              echo "$a + $b = $c"
	      echo "Printing the list of users in Bash:"
	      for user in "${list_of_users[@]}"; do
		      echo "$user"
	      done      
