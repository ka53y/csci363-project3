// -*- C++ -*-
// $Id: Stack.inl 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{
	return this->data_->cur_size_();
}

//
// top
//
template <typename T>
inline
Array<char> Stack <T>::top (void) const
{
	//char returnval = this->data_[track];
	if (data_ == NULL) {
		std::cout << "empty" << std::endl;
	}
	return this->data_[track];
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
	if (track == -1) {
		return true;
	}
	else {
		return false;
	}
}
