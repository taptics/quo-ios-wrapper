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

```
- (void)getUserWithIdentifier:(NSString *)identifier block:(QUOGetUser)block;
```
Returns the user with the given identifier.

```
- (void)createUserWithUsername:(NSString *)username
                      password:(NSString *)password
                          name:(NSString *)name
                      location:(NSString *)location
                         block:(QUOSuccessMessage)block;
```
Returns true if the creation was successful.

```
- (void)authenticateUserWithUsername:(NSString *)username
                            password:(NSString *)password
                               block:(QUOSuccess)block;
```
Returns true if the authentication was successful.

```
- (void)getAllPostsWithBlock:(QUOGetAllObjects)block;
```
Returns all posts in the database.

```
- (void)getAllPostsFromUser:(NSString *)userId block:(QUOGetAllObjects)block;
```
Returns all posts from the given user.

```
- (void)getPostWithIdentifier:(NSString *)identifier block:(QUOGetPost)block;
```
Returns a post with the given identifier.

```
- (void)createPostWithTitle:(NSString *)title
                       text:(NSString *)text
                     userId:(NSString *)userId
                   location:(NSString *)location
                      block:(QUOSuccess)block;
```
Returns true if the post was successfully created.

```
- (void)likePostWithIdentifier:(NSString *)identifier
                        userId:(NSString *)userId
                         block:(QUOSuccess)block;
```
Returns true if the like was successful.

```
- (void)flagPostWithIdentifier:(NSString *)identifier block:(QUOSuccess)block;
```
Returns true if the flag was successful.
