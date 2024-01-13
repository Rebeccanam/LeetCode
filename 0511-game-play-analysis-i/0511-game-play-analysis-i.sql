SELECT  player_id, event_date as first_login
FROM
  Activity
WHERE
  (player_id, event_date) IN (
    SELECT
      player_id,
      min(event_date) AS first_login
    FROM
      Activity
    GROUP BY
      player_id
  )