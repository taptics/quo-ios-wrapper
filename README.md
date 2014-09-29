Wrapper
---
API wrapper for iOS

Frameworks
---
* [AFNetworking](https://github.com/AFNetworking/AFNetworking)

Documentation
---

```
+ (instancetype)sharedClient;
```
Returns the shared instance of the Quo object.

```
- (void)getAllUsersWithBlock:(QUOGetAllObjects)block;
```
Returns all users in the database.
