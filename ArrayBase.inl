template<typename T>
inline
size_t ArrayBase<T>::size(void) const
{
    return cur_size_;
}

template<typename T>
inline
size_t ArrayBase<T>::max_size(void) const
{
    return max_size_;
}