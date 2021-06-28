#!/usr/bin/env python
# coding: utf-8

# In[2]:


import numpy as np
from scipy import linalg
from skimage import filters


# In[1]:


import matplotlib.pyplot as plt
import matplotlib.image as mpimg

img=mpimg.imread('city.jpg')
plt.imshow(img)


# In[5]:


img.shape


# In[3]:


img[:,:,2]


# In[6]:


img_array = img / 255
img_gray = img_array @ [0.2126, 0.7152, 0.0722]
plt.imshow(img_gray, cmap="gray")


# In[8]:


img_gray.shape


# In[13]:


mpimg.imsave('city_gray.jpg',img_gray)


# In[10]:


img_roberts = filters.roberts(img_gray)
plt.imshow(img_roberts, cmap="gray")


# In[15]:


mpimg.imsave('roberts_city_gray.jpg',img_roberts)


# In[16]:


img_sobel= filters.sobel(img_gray)
plt.imshow(img_sobel, cmap="gray")


# In[17]:


mpimg.imsave('sobel_city_gray.jpg', img_sobel)

