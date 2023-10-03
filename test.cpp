#include <QSet>
int main() { return *(int*)(*(DEC(QSet<int*>({new int(10)}).end()))); }
