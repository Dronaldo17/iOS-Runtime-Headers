/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString, AAAccount;

@interface AAAuthenticateRequest : AARequest {
    AAAccount *_account;
    NSString *_password;
    NSString *_username;
}

@property(copy) AAAccount * account;
@property(copy) NSString * password;
@property(copy) NSString * username;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)password;
- (void)setAccount:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;
- (id)username;

@end