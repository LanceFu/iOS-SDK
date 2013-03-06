//
//  AKEntity.h
//  Pods
//
//  Created by Arash  Sanieyan on 2013-01-11.
//
//


@class AKEntityManager;
@class RKPaginator;
@class RKObjectManager;
@class RKObjectMapping;
@class RKResponseDescriptor;

/**
 @class AKEntity
 
 @abstract
*/
@interface AKEntity : NSObject

/**
 @method
 
 @abstract
 
*/
+ (void)setSharedManager:(AKEntityManager*)configuration;

/**
 @method
 
 @abstract
 
*/
+ (AKEntityManager*)sharedManager;

/**
 @method
 
 @abstract
 
*/
+ (void)configureEntity:(AKEntityManager *)manager;

/**
 @method
 
 @abstract
 
*/
+ (RKPaginator*)paginatorWithParameters:(NSDictionary*)parameters;

/**
 @method
 
 @abstract
 
*/
+ (void)objectsWithParameters:(NSDictionary*)parameters success:(void(^)(NSArray *objects))success
    failure:(void(^)(NSError *error))failure;

@end


/**
 @class AKEntity(Loading)
 
 @abstract
*/
@interface AKEntity(Loading)

- (void)load:(void(^)())success failure:(void(^)(NSError *error))failure;

@end