//yanling1
inherit ROOM;
void create()
{
  set ("short", "������·");
  set ("long", @LONG
����������궫·�������ݵ�һ���Ͻ֡����ߵķ��ݿ���ȥ�Ѿ��ܳ�
���ˡ�·����������ģ�ż����һ������·��������ǰ�ߣ����������Ŀ�
������¥�ˡ�·�����м��ӻ��̣�������ƫƧ�ĵط����������ⲻ��̫��.
LONG);

set("outdoors","/d/zhongzhou");

  set("exits", ([  
    "west" : __DIR__"yanling2",
    "north" : __DIR__"zahuopu",
    "east"  : __DIR__"yanling",
]));
	set("objects",([
		__DIR__"npc/fushang":1,
		__DIR__"npc/poorman":1,
	]));
       
	 setup();
        replace_program(ROOM);
}
