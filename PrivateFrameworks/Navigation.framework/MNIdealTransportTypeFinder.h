/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNIdealTransportTypeFinder : NSObject {
    MSPHistoryContainer * _mapsHistory;
}

- (void).cxx_destruct;
- (void)_idealTransportTypeForOrigin:(struct { double x1; double x2; })arg1 destination:(struct { double x1; double x2; })arg2 mapType:(int)arg3 handler:(id /* block */)arg4 handlerQueue:(id)arg5;
- (void)_preferredTransportTypeForMapType:(int)arg1 handler:(id /* block */)arg2 handlerQueue:(id)arg3;
- (int)_transportTypeCompatibleWithMapType:(int)arg1;
- (id)_transportTypePreferenceAsString:(int)arg1;
- (int)idealTransportTypeForMapType:(int)arg1;
- (void)idealTransportTypeForMapType:(int)arg1 handler:(id /* block */)arg2;
- (int)idealTransportTypeForOrigin:(struct { double x1; double x2; })arg1 destination:(struct { double x1; double x2; })arg2 mapType:(int)arg3;
- (void)idealTransportTypeForOrigin:(struct { double x1; double x2; })arg1 destination:(struct { double x1; double x2; })arg2 mapType:(int)arg3 handler:(id /* block */)arg4;
- (void)idealTransportTypeForOrigin:(struct { double x1; double x2; })arg1 destination:(struct { double x1; double x2; })arg2 mapType:(int)arg3 handler:(id /* block */)arg4 handlerQueue:(id)arg5;
- (id)initWithMapsHistory:(BOOL)arg1;

@end
