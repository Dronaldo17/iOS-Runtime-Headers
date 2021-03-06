/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(copy) NSArray * weatherLocations;

+ (id)locationSearchCompleted;
+ (id)locationSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSearchCompletedWithWeatherLocations:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithWeatherLocations:(id)arg1;
- (void)setWeatherLocations:(id)arg1;
- (id)weatherLocations;

@end
