
inherit ROOM;

void create()
{
	set("short", "�ײĵ�����");
	set("long",
	     "\nһ���ţ�һ�ɸ������㼸��Ҫ��Ϣ�ˡ��������ǹײ�(guancai)��\n"
	);
	set("exits", ([
		"west" : __DIR__"guancai1",
	]));
	set("item_desc", ([
		"guancai" : "\n�ײİ�ܽ�ʵ���������Щ�ҳ���\n" ,
	]));
	setup();
	replace_program(ROOM);
}

