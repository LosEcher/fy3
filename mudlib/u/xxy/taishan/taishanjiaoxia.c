// music ̩ɽ����

inherit ROOM;

void create ()
{
  set ("short", "̩ɽ����");
  set ("long", @LONG
	����������֮�׵�̩ɽ���£������ӱ������صĽ�ͨҪ����
������һֱ���ϵ��������ݣ�����ͨ��ȫ�������̳������Ŀǰ��
����·����ʱ�ĵ���

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xiaofan" : 1,
]));
  set("outdoors", "/d/taishan");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"to_yz1",
]));

  setup();
}
