// Room: /u/swordman/yangzhou/baita.c

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
        "��԰����ˮ������ٳ��ׯ��
    ������������һ����˵��������ҵ��ʢʱ�ڣ���������ʷ�ھ��������
���˵����Ҳ�кͱ���һ���İ����������������̰ڼ���Ѳ������Ϊ����
�۾�֮����θ����˴������ͱ���ңң��������˵�������µ�����������
ζ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"jiedao3",
]));
  set("light_up", 1);

  setup();
}
