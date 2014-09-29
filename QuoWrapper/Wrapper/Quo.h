//
//  Quo.h
//  Quo
//
//  Created by Ryan Cohen on 8/30/14.
//  Copyright (c) 2014 Quo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QUOUser.h"
#import "QUOPost.h"

#define TITLE_MAX_LENGTH 26

#define QUO_LATO_REGULAR   @"Lato-Regular"
#define QUO_LATO_LIGHT     @"Lato-Light"
#define QUO_LATO_BOLD      @"Lato-Bold"
#define QUO_SKOLAR         @"Skolar"

#define QUO_NEW_POST_COLOR [UIColor colorWithRed:50/255.f  green:188/255.f blue:182/255.f alpha:1.f]
#define QUO_OLD_POST_COLOR [UIColor colorWithRed:231/255.f green:231/255.f blue:231/255.f alpha:1.f]
#define QUO_BLACK_COLOR    [UIColor colorWithRed:79/255.f  green:79/255.f  blue:79/255.f  alpha:1.f]
#define QUO_ORANGE_COLOR   [UIColor colorWithRed:255/255.f green:98/255.f  blue:70/255.f  alpha:1.f]

typedef void (^QUOGetAllObjects)(NSArray *objects);
typedef void (^QUOGetUser)(QUOUser *user);
typedef void (^QUOGetPost)(QUOPost *post);
typedef void (^QUOSuccess)(BOOL success);
typedef void (^QUOSuccessMessage)(BOOL success, NSString *error);

@interface Quo : NSObject

/*!
 The unique API key for this client.
 */
@property (nonatomic, strong) NSString *apiKey;

/*!
 Returns the shared instance of the Quo object.
 @result Shared instance of Quo.
 */
+ (instancetype)sharedClient;

/*!
 Returns all users in the database.
 @result Array of QUOUser objects.
 */
- (void)getAllUsersWithBlock:(QUOGetAllObjects)block;

/*!
 Returns the user with the given identifier.
 
 @param identifier The user's identifier
 @result A QUOUser object.
 */
- (void)getUserWithIdentifier:(NSString *)identifier block:(QUOGetUser)block;

/*!
 Returns true if the creation was successful.
 
 @param username The user's username
 @param password The user's password
 @param name     The user's full name
 @result Boolean determining if the creation was successful.
 */
- (void)createUserWithUsername:(NSString *)username
                      password:(NSString *)password
                          name:(NSString *)name
                      location:(NSString *)location
                         block:(QUOSuccessMessage)block;

/*!
 Returns true if the authentication was successful.
 
 @param username The user's username
 @param password The user's password
 @result Boolean determining if the authentication was successful.
 */
- (void)authenticateUserWithUsername:(NSString *)username
                            password:(NSString *)password
                               block:(QUOSuccess)block;

/*!
 Returns all posts in the database.
 @result Array of QUOPost objects.
 */
- (void)getAllPostsWithBlock:(QUOGetAllObjects)block;

/*!
 Returns all posts from the given user.
 
 @param userId The user's identifier
 @result Array of QUOPost objects.
 */
- (void)getAllPostsFromUser:(NSString *)userId block:(QUOGetAllObjects)block;

/*!
 Returns a post with the given identifier.
 
 @param identifier The post's identifier
 @result A QUOPost object.
 */
- (void)getPostWithIdentifier:(NSString *)identifier block:(QUOGetPost)block;

/*!
 Returns true if the post was successfully created.
 
 @param title    The post's title
 @param text     The post's content
 @param userId   The identifier of the user who created this post
 @param locaion  The post's location
 @result Boolean determining if the post was successfully created.
 */
- (void)createPostWithTitle:(NSString *)title
                       text:(NSString *)text
                     userId:(NSString *)userId
                   location:(NSString *)location
                      block:(QUOSuccess)block;

/*!
 Returns true if the like was successful.
 
 @param identifier The post's identifier
 @param userId     The identifier of the user who created this post
 @result Boolean determining if the like was successful.
 */
- (void)likePostWithIdentifier:(NSString *)identifier
                        userId:(NSString *)userId
                         block:(QUOSuccess)block;

/*!
 Returns true if the flag was successful.
 
 @param identifier The post's identifier
 @result Boolean determining if the flag was successful.
 */
- (void)flagPostWithIdentifier:(NSString *)identifier block:(QUOSuccess)block;

@end
