/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {
    UIView *_changedSubview;
    UIView *_originalVisitedView;
    unsigned long long _reasons;
    bool_viewHasDefinedTintColor;
    bool_viewHasNonAutomaticTintAdjustmentMode;
    bool_visitedViewIsWindow;
}

- (void)_prepareForView:(id)arg1 trackingHierarchy:(bool)arg2;
- (bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (bool)_visitView:(id)arg1;
- (id)initWithNotificationReasons:(unsigned long long)arg1;
- (id)initWithTraversalDirection:(unsigned long long)arg1;

@end