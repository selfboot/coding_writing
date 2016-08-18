
# 条款 35：考虑 virtual 函数以外的其他选择

virtual 函数应该几乎总是 private，客户通过 public non-virtual 成员函数间接调用 private virtual 函数，称为 NVI(*non-virtual interface*) 手法。

具体实现就是在基类保留一个public non-virtual 的接口，并调用一个 private virtual 函数进行实际工作，所有派生类需要实现各自的 private virtual 函数。

代码示例参考 [nvi_demo](35_nvi_demo.cpp) 



