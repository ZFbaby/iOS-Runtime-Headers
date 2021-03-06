/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalContactsProvider : NSObject {
    CNReputationStore * _reputationStore;
    CNContactStore * _store;
}

@property (retain) CNReputationStore *reputationStore;
@property (retain) CNContactStore *store;

+ (id)defaultProvider;
+ (BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1 inReputationStore:(id)arg2;

- (void).cxx_destruct;
- (id)_meWithKeys:(id)arg1;
- (void)contactDidChange:(id)arg1;
- (id)contactStore;
- (void)donateEncodedLikenessString:(id)arg1 forEmailAddress:(id)arg2;
- (id)init;
- (void)meCardDidChange:(id)arg1;
- (id)myAvatarEncodedString;
- (id)myFullName;
- (id)myNameWithStyle:(int)arg1;
- (id)myShortDisplayName;
- (id)reputationStore;
- (void)setReputationStore:(id)arg1;
- (void)setStore:(id)arg1;
- (BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1;
- (id)store;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;

@end
