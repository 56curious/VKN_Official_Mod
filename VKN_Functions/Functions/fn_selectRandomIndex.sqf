_array = _this;

_max = count _array;

_num = 0;
for "_i" from 0 to _max do {

  _val = floor(random (floor _i));

  _val = _val + 1;

  _num = (_num + _val) / 2;

  if (_num > _max) then {
    _num = _num - _max;
  };

};

_array select floor _num
