// Room: /d/tianxia/1road3
inherit ROOM;

void create()
{
  set ("short", "С·");
  set ("long", @LONG
����ʯ��С����ֱ��ͨ�����ϱ��µ�һ�����ߣ����������ȴ�
�������ţ��Ӷ���������˵ĲҽС�ǣ��������ֲ������ŵ���
����������һֱ�ϵ����ϣ�̧ͷ���Ļ���ֻ�������������͸�������
��ȥ������ҵ���ա�
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"1dongku",
  "south" : __DIR__"1road2",
]));
  setup();
}
