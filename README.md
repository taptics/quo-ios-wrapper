Wrapper
---
API wrapper for iOS

Frameworks
---
* [AFNetworking](https://github.com/AFNetworking/AFNetworking)

Documentation
---

**Shared Client**

```
+ (instancetype)sharedClient;
```
Returns the shared instance of the Quo object.

**Get All Users**
```
- (void)getAllUsersWithBlock:(QUOGetAllObjects)block;
```
Returns all users in the database.

**Get User By ID**
```
- (void)getUserWithIdentifier:(NSString *)identifier block:(QUOGetUser)block;
```
Returns the user with the given identifier.

**Create User**
```
- (void)createUserWithUsername:(NSString *)username
                      password:(NSString *)password
                          name:(NSString *)name
                      location:(NSString *)location
                         block:(QUOSuccessMessage)block;
```
Returns true if the creation was successful.

**Authenticate User**
```
- (void)authenticateUserWithUsername:(NSString *)username
                            password:(NSString *)password
                               block:(QUOSuccess)block;
```
Returns true if the authentication was successful.

**Get All Posts**
```
- (void)getAllPostsWithBlock:(QUOGetAllObjects)block;
```
Returns all posts in the database.

**Get All User's Posts**
```
- (void)getAllPostsFromUser:(NSString *)userId block:(QUOGetAllObjects)block;
```
Returns all posts from the given user.

**Get Post By ID**
```
- (void)getPostWithIdentifier:(NSString *)identifier block:(QUOGetPost)block;
```
Returns a post with the given identifier.

**Create Post**
```
- (void)createPostWithTitle:(NSString *)title
                       text:(NSString *)text
                     userId:(NSString *)userId
                   location:(NSString *)location
                      block:(QUOSuccess)block;
```
Returns true if the post was successfully created.

**Like Post**
```
- (void)likePostWithIdentifier:(NSString *)identifier
                        userId:(NSString *)userId
                         block:(QUOSuccess)block;
```
Returns true if the like was successful.

**Flag Post**
```
- (void)flagPostWithIdentifier:(NSString *)identifier block:(QUOSuccess)block;
```
Returns true if the flag was successful.
