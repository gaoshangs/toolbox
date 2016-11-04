local key = KEYS[1]; local size = ARGV[1]; local result = redis.call('lrange',key , 0, size -1); redis.call('ltrim', key, size, -1); return result
