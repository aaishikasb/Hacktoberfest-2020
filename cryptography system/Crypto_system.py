def machine():
    keys = "abcdefghijklmnopqrstuvwxyz !"
    values = keys[-1] + keys[0:-1]

    encrypt = dict(zip(keys, values))
    decrypt = dict(zip(values, keys))

    option = input(
        "Do you want to encrypt or decrypt, press e for encrypt and d for decrypt?")
    message = input("what is the message you wanna encrypt or decrypt?")

    if (option.lower() == 'e'):
        new_msg = ''.join([encrypt[i] for i in message])
        # here we are changing the values of each alphabet according to the values associated with keys in dictionary!

    elif (option.lower() == 'd'):
        new_msg = ''.join([decrypt[i] for i in message])

    else:
        print("Enter the valid option ( e or d )")

    return new_msg


print(machine())
