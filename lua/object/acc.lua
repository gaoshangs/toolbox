local account = require("account")
account:say(11)
print(account.balance)

account:hi(22)
print(account.balance)

account:show(33)
print(account.balance)

os.exit(200)
