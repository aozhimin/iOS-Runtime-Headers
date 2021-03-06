/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFallbackPresentationViewController : UIViewController {
    BOOL  _hasDismissCompletionHandler;
    BOOL  _hasPreservedKeyboardInputViews;
    id /* block */  _presentationPreparationBlock;
    _UIFallbackPresentationWindow * _presentationWindow;
    UIWindow * _rotationDecider;
}

@property (nonatomic) BOOL hasDismissCompletionHandler;
@property (nonatomic) BOOL hasPreservedKeyboardInputViews;
@property (nonatomic, copy) id /* block */ presentationPreparationBlock;
@property (nonatomic, retain) UIWindow *rotationDecider;

- (void).cxx_destruct;
- (void)_dismissViewControllerWithTransition:(int)arg1 from:(id)arg2 completion:(id /* block */)arg3;
- (void)_preparePresentationControllerForPresenting:(id)arg1;
- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(BOOL)arg3;
- (void)_preserveInputViewsAnimated:(BOOL)arg1;
- (void)_restoreInputViewsAnimated:(BOOL)arg1;
- (BOOL)hasDismissCompletionHandler;
- (BOOL)hasPreservedKeyboardInputViews;
- (id /* block */)presentationPreparationBlock;
- (id)rotationDecider;
- (void)setHasDismissCompletionHandler:(BOOL)arg1;
- (void)setHasPreservedKeyboardInputViews:(BOOL)arg1;
- (void)setPresentationPreparationBlock:(id /* block */)arg1;
- (void)setRotationDecider:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
