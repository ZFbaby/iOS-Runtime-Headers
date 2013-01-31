/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSDictionary;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * category;
@property(copy) NSDictionary * timings;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)metrics;

- (void)setTimings:(id)arg1;
- (id)timings;
- (id)encodedClassName;
- (id)category;
- (void)setCategory:(id)arg1;
- (id)groupIdentifier;

@end