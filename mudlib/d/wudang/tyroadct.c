// tynroad.c ��԰С·
// by Marz 

inherit ROOM;

void create()
{
	    
	set("short", "��԰С·");
	set("long", @LONG
	��ǰ��Ȼ���ʣ������ɵ�������԰�ߵ�С·�ϡ�·����Ӣ�ͷף�һ���������֣�
ʢ���ŷۺ���һ�������һƬ���������ߡ������Կ����۷䡸���ˡ����ڻ������
����æ����ͣ�������Գ���ߴզ����������䵱ɽ�е�һ��С·��
LONG
	);
	set("exits", ([
		"south" : __DIR__"taiziyan",
		"west" : __DIR__"nanyan",
		"east" : __DIR__"shesheng",
	]));
	set("objects", ([
                __DIR__"npc/shouyuan" : 1]));
	setup();
}
