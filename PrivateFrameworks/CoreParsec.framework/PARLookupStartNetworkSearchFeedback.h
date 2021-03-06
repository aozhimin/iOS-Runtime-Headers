/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARLookupStartNetworkSearchFeedback : SFStartNetworkSearchFeedback {
    int  _lookupSelectionType;
}

@property (nonatomic, readonly) int lookupSelectionType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned int)arg4 endpoint:(unsigned int)arg5 lookupSelectionType:(int)arg6;
- (int)lookupSelectionType;

@end
