//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NSViewBlockAnimationDelegate : NSObject
{
    CDUnknownBlockType _completion;
    BOOL _ignoreInteractionEvents;
}

@property(nonatomic) BOOL ignoreInteractionEvents; // @synthesize ignoreInteractionEvents=_ignoreInteractionEvents;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(id)arg2;

@end
