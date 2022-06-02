import cv2
import numpy as np
def decryption(img_name: str, key1, key2):
    img = cv2.imread(img_name, cv2.IMREAD_COLOR)
    m_inverse = pow(key1, -1, 256)
    decrypt_temp = (img - key2) % 256
    decrypt = (decrypt_temp * m_inverse) % 256
    cv2.imwrite('decrypt-img.jpg',decrypt)
def encryption(img_name: str, key1, key2):
    img = cv2.imread(img_name, cv2.IMREAD_COLOR)
    grayimg = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    grey_arr = np.asarray(grayimg)
    temp = (grey_arr * key1) % 256
    cipher = (temp + key2) % 256
    cv2.imwrite('encrypt-img.png',cipher)
key1 = 157
key2 = 17987
image_name = 'image-affine.png'
encryption(img_name=image_name, key1=key1, key2=key2)
decryption(img_name='encrypt-img.png', key1=key1, key2=key2)