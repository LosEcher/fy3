// music yangzhou's ��·�� 2

inherit ROOM;

void create()
{
  set ("short", "��·��");
  set ("long", @LONG
	����һ����·�ڣ�����ͨ�����ɽׯ������ͨ�������ǽ���
���ߴ������������������Ǹ�ѧ�á��򶫾�����������Ľֵ�--
����Ϊ������ʮ������·���Ķ��ؽ��ˡ�

LONG
    );

  set("objects", ([ 
                   __DIR__"npc/shusheng" : 1,
                 ]));
  set("outdoors", "/d/yangzhou");
  set("exits", ([  
    "west" : __DIR__"shuyuan",
    "south" : __DIR__"yanchi",
    "north" : __DIR__"jiedao2",
    "east"  : __DIR__"dongguan1",
]));

  setup();
}
