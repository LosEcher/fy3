// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("����Ĳ�����",({"xiang"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("long","һ����������Ȼ����մ��������ȴҲ�ڸǲ�ס���ļ�ֵ��\n");
		set("value",20000);
		set("material","gold");
	}
}
