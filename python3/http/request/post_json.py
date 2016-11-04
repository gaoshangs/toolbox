# -*- coding:utf-8 -*-
import requests, json, time, redis
rd = redis.StrictRedis()
def get(offset):
    types = 'channel'
    field = 'finish_time'
    key = types+'_'+field
    url = 'http://www.baidu.com'
    search = {'field':field, 'page':{'from':offset, 'size':100}}
    payload = {'action':'fields_missing', 'type':types, 'search':json.dumps(search)}
    r = requests.post(url, payload)
    text = json.loads(r.text)
    ids = text['msg']['data']
    rd.lpush(key, *ids)
i = 0
while i < 2 :
    get(i*10)
    i+=1
    time.sleep(1)
